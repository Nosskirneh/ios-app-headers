//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSData, NSURL;

@interface AdswizzAudioLoader : Loader
{
    NSURL *_urlToLoad;
    NSData *_audioData;
}

@property(retain) NSData *audioData; // @synthesize audioData=_audioData;
@property(retain, nonatomic) NSURL *urlToLoad; // @synthesize urlToLoad=_urlToLoad;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (_Bool)shouldReport500Errors;
- (_Bool)shouldAddRetryParam;
- (id)generateRequest;
- (int)type;
- (id)initWithUrlToLoad:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

