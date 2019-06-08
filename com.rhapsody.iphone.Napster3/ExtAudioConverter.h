//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ExtAudioConverter : NSObject
{
    int outputSampleRate;
    int outputNumberChannels;
    int outputBitDepth;
    unsigned int _outputFormatID;
    unsigned int _outputFileType;
    NSString *inputFile;
    NSString *outputFile;
}

@property(nonatomic) unsigned int outputFileType; // @synthesize outputFileType=_outputFileType;
@property(nonatomic) unsigned int outputFormatID; // @synthesize outputFormatID=_outputFormatID;
@property(nonatomic) int outputBitDepth; // @synthesize outputBitDepth;
@property(nonatomic) int outputNumberChannels; // @synthesize outputNumberChannels;
@property(nonatomic) int outputSampleRate; // @synthesize outputSampleRate;
@property(copy, nonatomic) NSString *outputFile; // @synthesize outputFile;
@property(copy, nonatomic) NSString *inputFile; // @synthesize inputFile;
- (void).cxx_destruct;
- (id)descriptionForStandardFlags:(unsigned int)arg1;
- (id)descriptionForAudioFormat:(struct AudioStreamBasicDescription)arg1;
- (void)validateInput:(struct ExtAudioConverterSettings *)arg1;
- (_Bool)startConversionWithTrimAfterDuration:(id)arg1;
- (id)convertWithTrimAfterDuration:(id)arg1;
- (id)convert;

@end

