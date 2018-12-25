//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAAutocompleteAddressSource-Protocol.h"

@class NSMutableArray, NSString;

@interface GWAAutocompleteAddressSource : NSObject <GWAAutocompleteAddressSource>
{
    NSMutableArray *_addressSources;
}

+ (id)autocompleteAddressSource;
- (void).cxx_destruct;
- (void)loadAddressesForPrefix:(id)arg1 field:(BOOL)arg2 restrictToCountry:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addAddressSource:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

