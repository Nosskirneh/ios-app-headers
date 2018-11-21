//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTThemeConfigurationResolver-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString, SPTReaderWriterMutableDictionary;

@interface SPTThemeJSONConfigurationResolver : NSObject <SPTThemeConfigurationResolver>
{
    NSMutableDictionary *_configuration;
    SPTReaderWriterMutableDictionary *_flags;
    NSSet *_suffixes;
    NSMutableDictionary *_keysToAliases;
}

+ (id)urlForConfigurationFileNamed:(id)arg1 inBundle:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *keysToAliases; // @synthesize keysToAliases=_keysToAliases;
@property(readonly, nonatomic) NSSet *suffixes; // @synthesize suffixes=_suffixes;
- (void).cxx_destruct;
- (id)registerConfigurationValue:(id)arg1 forKeyWithFlags:(id)arg2 overridingCurrentValues:(_Bool)arg3;
- (id)dependentKeysOfKeys:(id)arg1;
- (id)configurationValueForKey:(id)arg1 reportErrors:(_Bool)arg2;
@property(readonly, nonatomic) NSDictionary *configuration;
@property(readonly, nonatomic) __weak NSDictionary *flags;
- (id)setFlag:(id)arg1 enabled:(_Bool)arg2 priority:(unsigned long long)arg3;
- (id)registerConfigurationDictionary:(id)arg1 overridingCurrentValues:(_Bool)arg2;
- (id)registerConfigurationFromFileNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithSuffixes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

