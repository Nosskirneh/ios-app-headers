//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFAtomManager-Protocol.h"

@class FNFDataBlockDistributor, NSDictionary, NSString;
@protocol FNFAtomManagerDelegate;

@interface FNFMp4AtomManager : NSObject <FNFAtomManager>
{
    id <FNFAtomManagerDelegate> _delegate;
    FNFDataBlockDistributor *_dataBlockDistributor;
    struct FNFMP4MoovAtomCompressed _moovAtom;
    struct FNFMp4FrameMetadataCompressor *_frames[2];
    unsigned long long _moovAtomSize;
    _Bool _moovAtomSizeParsedFromFile;
    _Bool _moovAtomParsed;
    _Bool _parsedHeader;
    CDStruct_1b6d18a9 _duration;
    struct opaqueCMFormatDescription *_formatDesc;
    struct AudioStreamBasicDescription _asbd;
    NSDictionary *_audioStreamExtraParameters;
    NSString *_audioCodec;
    int _trackId[2];
    unsigned int _timescale[2];
    _Bool _enableMp4AssetSeekingFix;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)currentOffsetForTrack:(long long)arg1;
- (unsigned long long)timescale;
- (int)_trackIdForTrackType:(int)arg1;
- (void)_setMoovAtomSizeFromFile:(unsigned long long)arg1;
- (void)_resetDataForSeekBack;
- (_Bool)parsedHeaders;
- (_Bool)parsedHeaderForTrack:(long long)arg1;
- (_Bool)moovAtomSizeParsedFromFile;
- (unsigned long long)moovAtomSize;
- (CDStruct_1b6d18a9)duration;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
- (CDStruct_1b6d18a9)nextAbsoluteAudioTime;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (CDStruct_1b6d18a9)currentVideoPts;
- (unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
- (_Bool)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
- (CDStruct_1b6d18a9)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
- (void)advanceFrameForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(_Bool)arg2;
- (id)audioCodec;
- (_Bool)containsAudio;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (struct FNFSeekStatus)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldResetAssetToBeginning;
- (id)dataBlockDistributorForTrack:(long long)arg1;
- (void)createNewDataBlockDistributors;
- (void)parseAtomForTrack:(long long)arg1;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)initWithMoovAtomSize:(unsigned long long)arg1 enableMp4AssetSeekingFix:(_Bool)arg2;
- (void)dealloc;

@end

