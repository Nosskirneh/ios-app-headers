//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZRSpectrumAnalyzer;

@interface DZRFFTHelper : NSObject
{
    DZRSpectrumAnalyzer *_spectrumAnalyzer;
}

@property(retain, nonatomic) DZRSpectrumAnalyzer *spectrumAnalyzer; // @synthesize spectrumAnalyzer=_spectrumAnalyzer;
- (void).cxx_destruct;
- (struct DZRFFT)pullLastSpectrumBuffer;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

