//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MSACompressionSettingsSource-Protocol.h"
#import "MSADynamicCaptureSettings-Protocol.h"

@class NSString;

@interface MSAScreenCaptureConfig : NSObject <MSADynamicCaptureSettings, MSACompressionSettingsSource>
{
    int deviceSpeed;
    double internalCompressionQualityScale;
    double targetInternalCompressionQualityScale;
    double initialTime;
    unsigned long long _maxFPS;
    float captureFPSAvgSum;
    unsigned long long captureFPSAvgValueCount;
    _Bool _shouldInterpolate;
    int _interpolationQuality;
    _Bool _dynamicJpegEnabled;
    _Bool _useAdaptiveFPS;
    float _theoreticalCaptureFPS;
    float _theoreticalCompressFPS;
    unsigned int compression;
    float _maxJpegQuality;
    float _minJpegQuality;
    double _qualityRampupTime;
    unsigned long long _desiredCompressionQuality;
    unsigned long long _limitFPS;
}

@property(nonatomic) unsigned long long limitFPS; // @synthesize limitFPS=_limitFPS;
@property(nonatomic) _Bool useAdaptiveFPS; // @synthesize useAdaptiveFPS=_useAdaptiveFPS;
@property(nonatomic) unsigned long long desiredCompressionQuality; // @synthesize desiredCompressionQuality=_desiredCompressionQuality;
@property _Bool dynamicJpegEnabled; // @synthesize dynamicJpegEnabled=_dynamicJpegEnabled;
@property(nonatomic) float minJpegQuality; // @synthesize minJpegQuality=_minJpegQuality;
@property(nonatomic) float maxJpegQuality; // @synthesize maxJpegQuality=_maxJpegQuality;
@property(nonatomic) double qualityRampupTime; // @synthesize qualityRampupTime=_qualityRampupTime;
@property(nonatomic) unsigned int compression; // @synthesize compression;
@property(nonatomic) float theoreticalCompressFPS; // @synthesize theoreticalCompressFPS=_theoreticalCompressFPS;
@property(nonatomic) float theoreticalCaptureFPS; // @synthesize theoreticalCaptureFPS=_theoreticalCaptureFPS;
@property(readonly, nonatomic) float compressionQuality;
@property(readonly) float theoreticalCaptureFPSAvg;
@property(readonly) int interpolationQuality;
@property(readonly) _Bool interpolate;
- (void)recalculateAdaptiveFPSSettings;
- (void)updateValues;
- (double)compressionQualityScale;
- (void)determineDeviceSpeed;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

