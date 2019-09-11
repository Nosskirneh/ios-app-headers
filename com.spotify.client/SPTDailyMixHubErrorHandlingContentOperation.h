//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@protocol HUBContentOperationDelegate;

@interface SPTDailyMixHubErrorHandlingContentOperation : NSObject <HUBContentOperation>
{
    _Bool _didPreviouslyLoad;
    id <HUBContentOperationDelegate> _delegate;
}

@property(nonatomic) _Bool didPreviouslyLoad; // @synthesize didPreviouslyLoad=_didPreviouslyLoad;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorOverlayWithViewModelBulder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

@end

