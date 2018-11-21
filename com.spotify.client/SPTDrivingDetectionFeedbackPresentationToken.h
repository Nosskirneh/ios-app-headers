//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTSlate, SPTSlateManager;

@interface SPTDrivingDetectionFeedbackPresentationToken : NSObject
{
    _Bool _completed;
    id <SPTSlateManager> _slateManager;
    id <SPTSlate> _slate;
    CDUnknownBlockType _completionHandler;
}

@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) __weak id <SPTSlate> slate; // @synthesize slate=_slate;
@property(readonly, nonatomic) __weak id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (void)completeWithResponse:(unsigned long long)arg1;
- (void)dismiss:(_Bool)arg1;
- (id)initWithSlateManager:(id)arg1 slate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

