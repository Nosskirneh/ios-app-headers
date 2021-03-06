//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DZRDownloadableManager : NSObject
{
    NSDictionary *_syncCollections;
}

+ (id)downloadableFileURLForUser:(id)arg1;
+ (id)downloadableDirectoryURL;
+ (id)dateFormatterYMDHMSMS;
+ (id)defaultManager;
@property(retain, nonatomic) NSDictionary *syncCollections; // @synthesize syncCollections=_syncCollections;
- (void).cxx_destruct;
- (void)writeToFile;
- (void)removeCollection:(id)arg1;
- (void)addCollection:(id)arg1;
- (id)collectionSyncDate:(id)arg1;
- (id)init;

@end

