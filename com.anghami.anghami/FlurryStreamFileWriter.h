//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlurryStreamFileWriter-Protocol.h"

@class NSFileHandle, NSString;

@interface FlurryStreamFileWriter : NSObject <IFlurryStreamFileWriter>
{
    NSFileHandle *_fileHandle;
    NSString *_openFilePath;
}

+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileWriter;
@property(copy, nonatomic) NSString *openFilePath; // @synthesize openFilePath=_openFilePath;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void).cxx_destruct;
- (_Bool)writeData:(id)arg1;
- (_Bool)seekToEndOfFile;
- (_Bool)openFile:(id)arg1;
- (_Bool)isOpenFile:(id)arg1;

@end

