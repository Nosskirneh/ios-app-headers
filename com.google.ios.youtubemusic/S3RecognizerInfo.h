//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HotwordMetadata, NSString, RecognitionContext, S3RecognizerInfo_PreambleMetadata;

@interface S3RecognizerInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *acousticCluster; // @dynamic acousticCluster;
@property(nonatomic) _Bool allowLanguageGeoOverride; // @dynamic allowLanguageGeoOverride;
@property(nonatomic) _Bool applyPreambleBasedDynamicScale; // @dynamic applyPreambleBasedDynamicScale;
@property(copy, nonatomic) NSString *condition; // @dynamic condition;
@property(nonatomic) float confidenceThreshold; // @dynamic confidenceThreshold;
@property(nonatomic) _Bool decodeAndDropPreambleAudio; // @dynamic decodeAndDropPreambleAudio;
@property(nonatomic) _Bool dictationMode; // @dynamic dictationMode;
@property(nonatomic) _Bool enableAlternates; // @dynamic enableAlternates;
@property(nonatomic) _Bool enableAudioFrameCount; // @dynamic enableAudioFrameCount;
@property(nonatomic) _Bool enableAudioLevelEvents; // @dynamic enableAudioLevelEvents;
@property(nonatomic) _Bool enableAutomaticPunctuation; // @dynamic enableAutomaticPunctuation;
@property(nonatomic) _Bool enableCombinedNbest; // @dynamic enableCombinedNbest;
@property(nonatomic) _Bool enableDecoderEvents; // @dynamic enableDecoderEvents;
@property(nonatomic) _Bool enableEndpointerEvents; // @dynamic enableEndpointerEvents;
@property(nonatomic) _Bool enableLattice; // @dynamic enableLattice;
@property(nonatomic) _Bool enablePartialConfidenceScores; // @dynamic enablePartialConfidenceScores;
@property(nonatomic) _Bool enablePartialNbest; // @dynamic enablePartialNbest;
@property(nonatomic) _Bool enablePartialResults; // @dynamic enablePartialResults;
@property(nonatomic) _Bool enablePersonalization; // @dynamic enablePersonalization;
@property(nonatomic) _Bool enablePredictedRecognitionEvents; // @dynamic enablePredictedRecognitionEvents;
@property(nonatomic) _Bool enableQueuedAudioEvents; // @dynamic enableQueuedAudioEvents;
@property(nonatomic) _Bool enableRecognizerDeadlines; // @dynamic enableRecognizerDeadlines;
@property(nonatomic) _Bool enableRequestAwareRecognition; // @dynamic enableRequestAwareRecognition;
@property(nonatomic) _Bool enableResultPrefetch; // @dynamic enableResultPrefetch;
@property(nonatomic) _Bool enableSemanticResults; // @dynamic enableSemanticResults;
@property(nonatomic) _Bool enableSpeakerDiarization; // @dynamic enableSpeakerDiarization;
@property(nonatomic) _Bool greco2CompatMode; // @dynamic greco2CompatMode;
@property(nonatomic) _Bool hasAcousticCluster; // @dynamic hasAcousticCluster;
@property(nonatomic) _Bool hasAllowLanguageGeoOverride; // @dynamic hasAllowLanguageGeoOverride;
@property(nonatomic) _Bool hasApplyPreambleBasedDynamicScale; // @dynamic hasApplyPreambleBasedDynamicScale;
@property(nonatomic) _Bool hasCondition; // @dynamic hasCondition;
@property(nonatomic) _Bool hasConfidenceThreshold; // @dynamic hasConfidenceThreshold;
@property(nonatomic) _Bool hasDecodeAndDropPreambleAudio; // @dynamic hasDecodeAndDropPreambleAudio;
@property(nonatomic) _Bool hasDictationMode; // @dynamic hasDictationMode;
@property(nonatomic) _Bool hasEnableAlternates; // @dynamic hasEnableAlternates;
@property(nonatomic) _Bool hasEnableAudioFrameCount; // @dynamic hasEnableAudioFrameCount;
@property(nonatomic) _Bool hasEnableAudioLevelEvents; // @dynamic hasEnableAudioLevelEvents;
@property(nonatomic) _Bool hasEnableAutomaticPunctuation; // @dynamic hasEnableAutomaticPunctuation;
@property(nonatomic) _Bool hasEnableCombinedNbest; // @dynamic hasEnableCombinedNbest;
@property(nonatomic) _Bool hasEnableDecoderEvents; // @dynamic hasEnableDecoderEvents;
@property(nonatomic) _Bool hasEnableEndpointerEvents; // @dynamic hasEnableEndpointerEvents;
@property(nonatomic) _Bool hasEnableLattice; // @dynamic hasEnableLattice;
@property(nonatomic) _Bool hasEnablePartialConfidenceScores; // @dynamic hasEnablePartialConfidenceScores;
@property(nonatomic) _Bool hasEnablePartialNbest; // @dynamic hasEnablePartialNbest;
@property(nonatomic) _Bool hasEnablePartialResults; // @dynamic hasEnablePartialResults;
@property(nonatomic) _Bool hasEnablePersonalization; // @dynamic hasEnablePersonalization;
@property(nonatomic) _Bool hasEnablePredictedRecognitionEvents; // @dynamic hasEnablePredictedRecognitionEvents;
@property(nonatomic) _Bool hasEnableQueuedAudioEvents; // @dynamic hasEnableQueuedAudioEvents;
@property(nonatomic) _Bool hasEnableRecognizerDeadlines; // @dynamic hasEnableRecognizerDeadlines;
@property(nonatomic) _Bool hasEnableRequestAwareRecognition; // @dynamic hasEnableRequestAwareRecognition;
@property(nonatomic) _Bool hasEnableResultPrefetch; // @dynamic hasEnableResultPrefetch;
@property(nonatomic) _Bool hasEnableSemanticResults; // @dynamic hasEnableSemanticResults;
@property(nonatomic) _Bool hasEnableSpeakerDiarization; // @dynamic hasEnableSpeakerDiarization;
@property(nonatomic) _Bool hasGreco2CompatMode; // @dynamic hasGreco2CompatMode;
@property(nonatomic) _Bool hasHotwordMetadata; // @dynamic hasHotwordMetadata;
@property(nonatomic) _Bool hasLogFeaturesOnly; // @dynamic hasLogFeaturesOnly;
@property(nonatomic) _Bool hasLoggingDataRequested; // @dynamic hasLoggingDataRequested;
@property(nonatomic) _Bool hasMaxNbest; // @dynamic hasMaxNbest;
@property(nonatomic) _Bool hasPreambleMetadata; // @dynamic hasPreambleMetadata;
@property(nonatomic) _Bool hasPredictedRecognitionProbabilityThreshold; // @dynamic hasPredictedRecognitionProbabilityThreshold;
@property(nonatomic) _Bool hasProfanityFilter; // @dynamic hasProfanityFilter;
@property(nonatomic) _Bool hasRecognitionContext; // @dynamic hasRecognitionContext;
@property(nonatomic) _Bool hasResetIntervalMs; // @dynamic hasResetIntervalMs;
@property(nonatomic) _Bool hasReturnRecognizerMetadata; // @dynamic hasReturnRecognizerMetadata;
@property(retain, nonatomic) HotwordMetadata *hotwordMetadata; // @dynamic hotwordMetadata;
@property(nonatomic) _Bool logFeaturesOnly; // @dynamic logFeaturesOnly;
@property(nonatomic) _Bool loggingDataRequested; // @dynamic loggingDataRequested;
@property(nonatomic) int maxNbest; // @dynamic maxNbest;
@property(retain, nonatomic) S3RecognizerInfo_PreambleMetadata *preambleMetadata; // @dynamic preambleMetadata;
@property(nonatomic) float predictedRecognitionProbabilityThreshold; // @dynamic predictedRecognitionProbabilityThreshold;
@property(nonatomic) int profanityFilter; // @dynamic profanityFilter;
@property(retain, nonatomic) RecognitionContext *recognitionContext; // @dynamic recognitionContext;
@property(nonatomic) int resetIntervalMs; // @dynamic resetIntervalMs;
@property(nonatomic) _Bool returnRecognizerMetadata; // @dynamic returnRecognizerMetadata;

@end

