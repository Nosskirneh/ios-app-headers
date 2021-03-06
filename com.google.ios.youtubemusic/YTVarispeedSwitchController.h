//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActionSheetControllerDelegate-Protocol.h"

@class NSString, YTActionSheetController;
@protocol YTVarispeedSwitchControllerDelegate;

@interface YTVarispeedSwitchController : NSObject <YTActionSheetControllerDelegate>
{
    YTActionSheetController *_actionSheetController;
    id <YTVarispeedSwitchControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTVarispeedSwitchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addActionWithTitle:(id)arg1 rate:(float)arg2;
- (void)actionSheetDidDisappear:(id)arg1 cancelAction:(_Bool)arg2;
- (void)showMenuFromView:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

