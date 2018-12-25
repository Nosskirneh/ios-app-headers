//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTCommandRouter, YTICommand;
@protocol YTResponder, YTShareServices;

@interface YTSharerController : NSObject <YTTopController>
{
    id <YTShareServices> _shareServices;
    YTICommand *_model;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTCommandRouter *_commandRouter;
}

@property(readonly, nonatomic) YTCommandRouter *commandRouter; // @synthesize commandRouter=_commandRouter;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)initWithShareServices:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
