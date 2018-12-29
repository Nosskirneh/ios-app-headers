//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLAsynchronousOperation.h"

@class NSInputStream, SDLFileWrapper;
@protocol SDLConnectionManagerType;

@interface SDLUploadFileOperation : SDLAsynchronousOperation
{
    _Bool executing;
    _Bool finished;
    SDLFileWrapper *_fileWrapper;
    id <SDLConnectionManagerType> _connectionManager;
    NSInputStream *_inputStream;
}

+ (_Bool)sdl_newHighestCorrelationID:(id)arg1 highestCorrelationIDReceived:(long long)arg2;
+ (id)sdl_getDataChunkWithSize:(unsigned long long)arg1 inputStream:(id)arg2;
+ (unsigned long long)sdl_getDataSizeForOffset:(unsigned long long)arg1 fileSize:(unsigned long long)arg2 mtuSize:(unsigned long long)arg3;
+ (unsigned long long)sdl_getPutFileLengthForOffset:(unsigned long long)arg1 fileSize:(unsigned long long)arg2 mtuSize:(unsigned long long)arg3;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(nonatomic) __weak id <SDLConnectionManagerType> connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) SDLFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
- (void).cxx_destruct;
- (long long)queuePriority;
- (id)name;
- (void)sdl_closeInputStream;
- (id)sdl_openInputStreamWithFile:(id)arg1;
- (void)sdl_sendFile:(id)arg1 mtuSize:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)start;
- (id)initWithFile:(id)arg1 connectionManager:(id)arg2;

@end

