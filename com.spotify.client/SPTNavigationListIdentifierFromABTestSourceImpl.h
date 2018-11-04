//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNavigationListIdentifierFromABTestSource.h"

@class NSString, SPTNavigationSettingsRegistration;

@interface SPTNavigationListIdentifierFromABTestSourceImpl : NSObject <SPTNavigationListIdentifierFromABTestSource>
{
    _Bool _newExperienceEnabled;
    id <SPTProductState> _productState;
    id <SPTNavigationListProvider> _listProvider;
    NSString *_navigationMenuUserPolicyValue;
    NSString *_navigationMenuUserPolicyListIdentifier;
    SPTNavigationSettingsRegistration *_registration;
}

@property(nonatomic) _Bool newExperienceEnabled; // @synthesize newExperienceEnabled=_newExperienceEnabled;
@property(retain, nonatomic) SPTNavigationSettingsRegistration *registration; // @synthesize registration=_registration;
@property(copy, nonatomic) NSString *navigationMenuUserPolicyListIdentifier; // @synthesize navigationMenuUserPolicyListIdentifier=_navigationMenuUserPolicyListIdentifier;
@property(copy, nonatomic) NSString *navigationMenuUserPolicyValue; // @synthesize navigationMenuUserPolicyValue=_navigationMenuUserPolicyValue;
@property(retain, nonatomic) id <SPTNavigationListProvider> listProvider; // @synthesize listProvider=_listProvider;
@property(nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)navigationSettingsListIdentifierValue;
- (id)initWithProductState:(id)arg1 settingsRegistration:(id)arg2 newExperienceEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

