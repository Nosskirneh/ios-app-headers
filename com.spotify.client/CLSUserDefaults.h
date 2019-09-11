//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface CLSUserDefaults : NSObject
{
    _Bool _synchronizeWroteToDisk;
    NSURL *_directoryURL;
    NSURL *_fileURL;
    NSDictionary *_persistedDataDictionary;
    NSMutableDictionary *_dataDictionary;
    NSObject<OS_dispatch_queue> *_serialDictionaryQueue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

+ (id)standardUserDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDictionaryQueue; // @synthesize serialDictionaryQueue=_serialDictionaryQueue;
@property(readonly, copy, nonatomic) NSMutableDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(readonly, copy, nonatomic) NSDictionary *persistedDataDictionary; // @synthesize persistedDataDictionary=_persistedDataDictionary;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(nonatomic) _Bool synchronizeWroteToDisk; // @synthesize synchronizeWroteToDisk=_synchronizeWroteToDisk;
- (void).cxx_destruct;
- (id)objectForKeyByMigratingFromNSUserDefaults:(id)arg1;
- (void)migrateFromNSUserDefaults:(id)arg1;
- (id)loadDefaults;
- (void)synchronize;
- (id)dictionaryRepresentation;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)getEscapedAppBundleIdentifier;
- (id)generateDirectoryURLForBaseURL:(id)arg1 hostAppBundleIdentifier:(id)arg2;
- (id)generateDirectoryURL;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

