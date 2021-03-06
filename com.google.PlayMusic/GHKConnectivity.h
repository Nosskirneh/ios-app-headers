//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GHKConnectivity : NSObject
{
    unsigned long long _escalationOptionsConnectivity;
    unsigned long long _contextualSuggestionsConnectivity;
    unsigned long long _searchResultsConnectivity;
}

+ (_Bool)isOffline:(unsigned long long)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long searchResultsConnectivity; // @synthesize searchResultsConnectivity=_searchResultsConnectivity;
@property(nonatomic) unsigned long long contextualSuggestionsConnectivity; // @synthesize contextualSuggestionsConnectivity=_contextualSuggestionsConnectivity;
@property(nonatomic) unsigned long long escalationOptionsConnectivity; // @synthesize escalationOptionsConnectivity=_escalationOptionsConnectivity;
- (void)resetConnectivities;
- (id)init;

@end

