//
//  RecordViewController.h
//  VideoTest
//
//  Created by Pandita on 2013-09-10.
//  Copyright (c) 2013 Rongxin-Zhang-Hybridity. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface RecordViewController : UIViewController

-(BOOL)startCameraControllerFromViewController:(UIViewController*)controller
                                 usingDelegate:(id )delegate;

-(void)video:(NSString *)videoPath didFinishSavingWithError:(NSError *)error contextInfo:(void*)contextInfo;

@end
