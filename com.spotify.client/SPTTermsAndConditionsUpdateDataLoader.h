//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader;

@interface SPTTermsAndConditionsUpdateDataLoader : NSObject <SPTDataLoaderDelegate>
{
    _Bool _fetchUpdateInProgress;
    _Bool _putUpdateInProgress;
    id <SPTTermsAndConditionsUpdateDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
}

@property(nonatomic, getter=isPutUpdateInProgress) _Bool putUpdateInProgress; // @synthesize putUpdateInProgress=_putUpdateInProgress;
@property(nonatomic, getter=isFetchUpdateInProgress) _Bool fetchUpdateInProgress; // @synthesize fetchUpdateInProgress=_fetchUpdateInProgress;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTTermsAndConditionsUpdateDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)decorateRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)updateTermsWithLicenseVersion:(id)arg1;
- (void)fetchPendingTermsUpdate;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

