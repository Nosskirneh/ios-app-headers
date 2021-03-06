//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTICommand, YTInteractionLoggingProxyButton;
@protocol YTResponder;

@interface YTShareDialogLoggingProxyController : NSObject <YTGraftingViewController, YTResponder>
{
    YTInteractionLoggingProxyButton *_cancelButton;
    YTInteractionLoggingProxyButton *_confirmButton;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTICommand *_navEndpoint;
}

@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)endLogging;
- (void)logNewDialogWithType:(int)arg1;
- (void)logClickOnConfirmButton;
- (void)logClickOnCancelButton;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

