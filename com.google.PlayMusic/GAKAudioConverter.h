//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GAKAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_converter;
    struct AudioStreamBasicDescription _sourceFormat;
    struct AudioStreamBasicDescription _destinationFormat;
    struct GAKPacketData _outputData;
    unsigned int _outputBufferCapacityPackets;
    struct GAKPacketData _inputData;
    unsigned int _nextPacketIndex;
    struct AudioConverterPrimeInfo _primeInfo;
}

- (id)convertPacketData:(struct GAKPacketData *)arg1 withCallback:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) const struct AudioConverterPrimeInfo *primeInfo;
- (void)dealloc;
- (id)initWithSourceFormat:(struct AudioStreamBasicDescription *)arg1 destinationFormat:(struct AudioStreamBasicDescription *)arg2 error:(id *)arg3;

@end

