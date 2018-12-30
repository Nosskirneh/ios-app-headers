//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (Tar)
+ (id)dataForObject:(id)arg1 inRange:(struct _NSRange)arg2 orLocation:(unsigned long long)arg3 andLength:(unsigned long long)arg4;
+ (unsigned long long)sizeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
+ (id)nameForObject:(id)arg1 atOffset:(unsigned long long)arg2;
+ (BOOL)typeForObject:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)writeFileDataForObject:(id)arg1 atLocation:(unsigned long long)arg2 withLength:(unsigned long long)arg3 atPath:(id)arg4;
- (_Bool)createFilesAndDirectoriesAtPath:(id)arg1 withTarObject:(id)arg2 size:(unsigned long long)arg3 error:(id *)arg4 progress:(CDUnknownBlockType)arg5;
- (_Bool)createFilesAndDirectoriesAtPath:(id)arg1 withTarPath:(id)arg2 error:(id *)arg3 progress:(CDUnknownBlockType)arg4;
- (_Bool)createFilesAndDirectoriesAtPath:(id)arg1 withTarData:(id)arg2 error:(id *)arg3 progress:(CDUnknownBlockType)arg4;
- (_Bool)createFilesAndDirectoriesAtURL:(id)arg1 withTarData:(id)arg2 error:(id *)arg3 progress:(CDUnknownBlockType)arg4;
@end
