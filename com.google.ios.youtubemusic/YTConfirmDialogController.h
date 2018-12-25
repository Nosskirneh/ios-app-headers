//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTAlertView, YTIConfirmDialogRenderer;
@protocol YTResponder;

@interface YTConfirmDialogController : NSObject
{
    YTAlertView *_alertView;
    id <YTResponder> _firstResponder;
    YTIConfirmDialogRenderer *_renderer;
    id _entry;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)handleNavigationEndpoint:(id)arg1 entry:(id)arg2 firstReponder:(id)arg3;
- (void)handleServiceEndpoint:(id)arg1 entry:(id)arg2 firstReponder:(id)arg3;
- (void)handleCommand:(id)arg1 entry:(id)arg2 firstReponder:(id)arg3;
- (void)handleButtonRenderer:(id)arg1 entry:(id)arg2 firstReponder:(id)arg3;
- (void)confirm;
- (void)cancel;
- (void)cleanup;
- (void)addFieldsToView;
- (void)showWithRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3 configBlock:(CDUnknownBlockType)arg4 confirmBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
- (void)showWithRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3 confirmBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (void)showWithRenderer:(id)arg1 entry:(id)arg2 firstResponder:(id)arg3;

@end
