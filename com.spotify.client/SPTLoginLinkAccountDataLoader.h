//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTLoginLinkAccountDataLoaderDelegate;

@interface SPTLoginLinkAccountDataLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTLoginLinkAccountDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTLoginLinkAccountDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)linkAccountWithIdentifierToken:(id)arg1;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

