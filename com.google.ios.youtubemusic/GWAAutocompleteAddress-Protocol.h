//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol GWAAutocompleteAddress <NSObject>
@property(readonly, nonatomic) NSArray *matchedSubstrings;
@property(readonly, nonatomic) unsigned long long relevance;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) NSString *hint;
- (void)loadAddressWithCallback:(void (^)(PostalAddress *, NSError *))arg1;
@end

