//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GSKAudioLog;
@protocol GSKAudioCaptureDelegate;

@protocol GSKAudioCaptureInterface <NSObject>
@property(retain, nonatomic) GSKAudioLog *log;
@property(readonly, nonatomic) unsigned long long bytesPerSample;
@property(readonly, nonatomic) unsigned long long sampleRate;
@property(nonatomic) __weak id <GSKAudioCaptureDelegate> delegate;
- (void)abortCapture;
- (void)stopCapture;
- (void)startCapture;

@optional
- (_Bool)isPreambleData;
@end
