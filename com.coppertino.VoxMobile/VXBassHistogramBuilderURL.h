//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VXBassHistogramBuilder.h"

@class NSMutableArray;

@interface VXBassHistogramBuilderURL : VXBassHistogramBuilder
{
    _Bool _isStarted;
    _Bool _killScan;
    unsigned int _channel;
    unsigned int _fifoChannel;
    float _originalByterate;
    NSMutableArray *_histogram;
    unsigned long long _fileLength;
    unsigned long long _totalBytesRead;
    unsigned long long _totalBytesBuffered;
    double _reportTime;
    id _userObject;
    unsigned long long _levelCount;
}

@property(nonatomic) unsigned long long levelCount; // @synthesize levelCount=_levelCount;
@property(retain, nonatomic) id userObject; // @synthesize userObject=_userObject;
@property(nonatomic) double reportTime; // @synthesize reportTime=_reportTime;
@property(nonatomic) float originalByterate; // @synthesize originalByterate=_originalByterate;
@property(nonatomic) _Bool killScan; // @synthesize killScan=_killScan;
@property(nonatomic) unsigned int fifoChannel; // @synthesize fifoChannel=_fifoChannel;
@property(nonatomic) unsigned long long totalBytesBuffered; // @synthesize totalBytesBuffered=_totalBytesBuffered;
@property(nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) unsigned int channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long fileLength; // @synthesize fileLength=_fileLength;
- (id)histogram;
- (void).cxx_destruct;
- (void)donwloadFinished;
- (void)reportBuildProgress:(id)arg1;
- (void)readLevels;
- (unsigned int)createHistoChannel;
- (unsigned int)readBufferedData:(void *)arg1 ofLength:(unsigned int)arg2 forBassChannel:(unsigned int)arg3;
- (void)stop;
- (unsigned int)createFifoChannel;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;
- (id)init;

@end

