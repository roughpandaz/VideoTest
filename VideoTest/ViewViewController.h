//
//  ViewViewController.h
//  VideoTest
//
//  Created by Pandita on 2013-09-10.
//  Copyright (c) 2013 Rongxin-Zhang-Hybridity. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

// For opening UIImagePickerController
-(BOOL)startMediaBrowserFromViewController:(UIViewController*)controller usingDelegate:(id )delegate;

@end
