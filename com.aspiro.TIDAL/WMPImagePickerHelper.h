//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIImagePickerController, UIView, UIViewController;
@protocol WMPImagePickerDelegate;

@interface WMPImagePickerHelper : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    id <WMPImagePickerDelegate> _delegate;
    UIViewController *_owner;
    UIView *_targetView;
    UIImagePickerController *_imagePicker;
}

@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) UIViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <WMPImagePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishPickingMediaWithInfo:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)createPickerWithSourceType:(long long)arg1;
- (void)pickImage;
- (id)initWithOwner:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

