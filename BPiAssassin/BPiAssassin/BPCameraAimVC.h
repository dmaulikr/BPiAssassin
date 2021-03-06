//
//  BPCameraAimVC.h
//  BPiAssassin
//
//  Created by John Rozier on 2/15/14.
//  Copyright (c) 2014 BP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BPCameraAimVC : UIViewController

@property (weak, nonatomic) IBOutlet UIView *cameraFeedView;
@property (weak, nonatomic) IBOutlet UIButton *killTargetBtn;

- (IBAction)backBtnPressed:(id)sender;

- (IBAction)killTargetBtnPressed:(id)sender;

- (void)setUpCameraForUImage;

@end
