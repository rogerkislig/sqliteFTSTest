//
//  TTViewController.h
//  sqliteFTSTest
//
//  Created by Tonny Xu on 12/11/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TTViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *searchFeild;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (IBAction)readinRecords:(id)sender;
- (IBAction)doFTSSearch:(id)sender;
@end