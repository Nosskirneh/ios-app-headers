//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;

@interface FBSDKContainerViewController : UIViewController
{
    id <FBSDKContainerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSDKContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayChildController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end

