//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageMessageRequester-Protocol.h"

@class NSString;
@protocol SPTInAppMessageMessageRequesterDelegate;

@interface SPTInAppMessageMessageRequesterImplementation : NSObject <SPTInAppMessageMessageRequester>
{
    id <SPTInAppMessageMessageRequesterDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTInAppMessageMessageRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestMessageWithFeatureName:(id)arg1 eventName:(id)arg2 eventID:(id)arg3 eventVersion:(id)arg4;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

