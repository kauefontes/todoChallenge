//
//  AddItemViewController.h
//  challenge
//
//  Created by Kaue Pereira on 15/10/18.
//  Copyright © 2018 Kaue Pereira. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

-(void)didSaveNewTodo:(NSString *)todoText;

@end

@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
