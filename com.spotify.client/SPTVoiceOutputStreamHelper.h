//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSMutableArray, NSOutputStream, NSString;
@protocol SPTVoiceOutputStreamDelegate;

@interface SPTVoiceOutputStreamHelper : NSObject <NSStreamDelegate>
{
    _Bool _canBeWrittenDirectly;
    id <SPTVoiceOutputStreamDelegate> _delegate;
    NSOutputStream *_outputStream;
    unsigned long long _totalBytesWritten;
    NSMutableArray *_dataBuffer;
}

@property(retain, nonatomic) NSMutableArray *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(nonatomic) _Bool canBeWrittenDirectly; // @synthesize canBeWrittenDirectly=_canBeWrittenDirectly;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(nonatomic) __weak id <SPTVoiceOutputStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeDataToStream;
- (void)closeStream;
- (void)openStream;
- (void)writeData:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)writeData:(id)arg1;
- (id)initWithOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

