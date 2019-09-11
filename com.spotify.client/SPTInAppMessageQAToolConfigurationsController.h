//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTInAppMessageQAToolConfigurationsControllerDelegate, SPTLocalSettings;

@interface SPTInAppMessageQAToolConfigurationsController : NSObject <SPTDataLoaderDelegate>
{
    _Bool _useDevEndpoint;
    id <SPTInAppMessageQAToolConfigurationsControllerDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTLocalSettings> _localSettings;
}

@property(nonatomic) _Bool useDevEndpoint; // @synthesize useDevEndpoint=_useDevEndpoint;
@property(retain) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTInAppMessageQAToolConfigurationsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)deserializeData:(id)arg1;
- (void)handleFetchedData:(id)arg1;
- (void)handleSuccessfulResponse:(id)arg1;
- (void)handleErrorResponse:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)rejectCreativeWithID:(id)arg1;
- (void)approveCreativeWithID:(id)arg1;
- (long long)backendRequestTypeFromFormatType:(id)arg1;
- (_Bool)fetchMessageCreativesForCampaignWithID:(id)arg1 status:(long long)arg2 type:(id)arg3 andLocale:(id)arg4;
- (void)fetchLocales;
- (id)initWithDataLoader:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

