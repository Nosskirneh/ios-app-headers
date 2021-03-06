//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL, RACScheduler;

@interface FileSizeInspector : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_appDirectoryURL;
    NSString *_homeDirectoryPath;
    RACScheduler *_scheduler;
}

+ (id)appURL;
+ (id)backgroundScheduler;
@property(readonly, nonatomic) RACScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSString *homeDirectoryPath; // @synthesize homeDirectoryPath=_homeDirectoryPath;
@property(readonly, nonatomic) NSURL *appDirectoryURL; // @synthesize appDirectoryURL=_appDirectoryURL;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)sizeOfFileAtURL:(id)arg1;
- (_Bool)couldMeasureFileSize:(id)arg1;
- (id)recursiveFilesInDirectoryAtURL:(id)arg1;
- (id)filesAtURL:(id)arg1;
- (id)deviceCapacitySignal;
- (unsigned long long)deviceCapacityWithError:(id *)arg1;
- (id)sizeOfResourceAtURL:(id)arg1;
- (id)spaceUsedByOtherApps;
- (id)spaceUsedByApplication;
- (id)deviceFreeSpace;
- (unsigned long long)deviceCapacity;
- (id)initWithFileManager:(id)arg1 appDirectoryURL:(id)arg2 homeDirectoryPath:(id)arg3 scheduler:(id)arg4;
- (id)init;

@end

