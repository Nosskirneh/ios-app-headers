//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTTPResponse-Protocol.h"

@class HTTPConnection, NSString;

@interface HTTPFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    _Bool aborted;
    int fileFD;
    void *buffer;
    unsigned long long bufferSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)filePath;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (_Bool)openFileIfNeeded;
- (_Bool)openFile;
- (void)abort;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;

@end

