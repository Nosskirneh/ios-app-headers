//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AEAudioFileReader : NSObject
{
    _Bool _cancelled;
    unsigned int _readBlockSize;
    NSURL *_url;
    CDUnknownBlockType _loadBlock;
    CDUnknownBlockType _readBlock;
    CDUnknownBlockType _readCompletionBlock;
    struct AudioStreamBasicDescription _targetAudioDescription;
}

+ (id)readFileAtURL:(id)arg1 targetAudioDescription:(struct AudioStreamBasicDescription)arg2 readBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 blockSize:(unsigned int)arg5;
+ (id)readFileAtURL:(id)arg1 targetAudioDescription:(struct AudioStreamBasicDescription)arg2 readBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)loadFileAtURL:(id)arg1 targetAudioDescription:(struct AudioStreamBasicDescription)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)infoForFileAtURL:(id)arg1 audioDescription:(struct AudioStreamBasicDescription *)arg2 length:(unsigned int *)arg3 error:(id *)arg4;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) unsigned int readBlockSize; // @synthesize readBlockSize=_readBlockSize;
@property(copy, nonatomic) CDUnknownBlockType readCompletionBlock; // @synthesize readCompletionBlock=_readCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType readBlock; // @synthesize readBlock=_readBlock;
@property(copy, nonatomic) CDUnknownBlockType loadBlock; // @synthesize loadBlock=_loadBlock;
@property(nonatomic) struct AudioStreamBasicDescription targetAudioDescription; // @synthesize targetAudioDescription=_targetAudioDescription;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)reportError:(id)arg1;
- (void)read;
- (void)cancel;

@end
