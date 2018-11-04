//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSURL;

@interface AEAudioFileLoaderOperation : NSOperation
{
    unsigned int _lengthInFrames;
    NSURL *_url;
    CDUnknownBlockType _audioReceiverBlock;
    struct AudioBufferList *_bufferList;
    NSError *_error;
    struct AudioStreamBasicDescription _targetAudioDescription;
}

+ (_Bool)infoForFileAtURL:(id)arg1 audioDescription:(struct AudioStreamBasicDescription *)arg2 lengthInFrames:(unsigned int *)arg3 error:(id *)arg4;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned int lengthInFrames; // @synthesize lengthInFrames=_lengthInFrames;
@property(nonatomic) struct AudioBufferList *bufferList; // @synthesize bufferList=_bufferList;
@property(copy, nonatomic) CDUnknownBlockType audioReceiverBlock; // @synthesize audioReceiverBlock=_audioReceiverBlock;
@property(nonatomic) struct AudioStreamBasicDescription targetAudioDescription; // @synthesize targetAudioDescription=_targetAudioDescription;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)main;
- (id)initWithFileURL:(id)arg1 targetAudioDescription:(struct AudioStreamBasicDescription)arg2;

@end

