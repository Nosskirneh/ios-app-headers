//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTSendKitCoreOptions-Protocol.h"

@class SKTUIGridContactDisplayOptions;
@protocol SKTContactListColorOverrides;

@protocol SKTTopSuggestionsViewControllerOptions <SKTSendKitCoreOptions>
@property(retain, nonatomic) id <SKTContactListColorOverrides> topSuggestionsColorOverrides;
@property(retain, nonatomic) SKTUIGridContactDisplayOptions *gridContactDisplayOptions;
@property(nonatomic) unsigned long long initialSuggestionsLayout;
@property(nonatomic) unsigned long long initialSuggestionGridRows;
@property(nonatomic) unsigned long long initialSuggestionCount;
@end

