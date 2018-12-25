//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLMatcher : NSObject
{
}

+ (_Bool)phoneNumberMatchingIsSupported;
+ (id)adjustMatchInfoToOriginalEmail:(id)arg1 matchRangesForCanonicalizedTokens:(id)arg2;
+ (void)addMatchingFieldToAutocompletion:(id)arg1 matchingField:(id)arg2;
+ (void)addMatchingFieldArrayToAutocompletion:(id)arg1 matchingField:(id)arg2 matchingInfoArray:(id)arg3;
+ (id)matchInfoWithRange:(struct _NSRange)arg1 exactMatch:(_Bool)arg2;
+ (void)addMatchingFieldsToAutocompletionBuilder:(id)arg1 matchRanges:(id)arg2 field:(id)arg3;
+ (void)addMatchingFieldsToInAppNotificationOriginatingField:(id)arg1 matchRanges:(id)arg2;
+ (id)sortAndMergeMatchRanges:(id)arg1;
+ (id)autocompletionWithMatchInfoFromAutocompletion:(id)arg1 withDisplayNameMatchRanges:(id)arg2 emailMatchRanges:(id)arg3 phoneMatchRanges:(id)arg4 inAppNotificationTargetMatchRanges:(id)arg5;
+ (_Bool)computeMatchRangesWithAutocompletion:(id)arg1 queryTokens:(id)arg2 displayNameTokens:(id)arg3 emailTokens:(id)arg4 phoneTokens:(id)arg5 inAppNotificationTargetTokens:(id)arg6 matchRangesDict:(id)arg7;
+ (_Bool)computeMatchRanges:(id)arg1 withQueryToken:(id)arg2 valueTokensArray:(id)arg3;
+ (id)addMatchRangesForAutocompletion:(id)arg1 queryTokens:(id)arg2 clientConfig:(id)arg3 matcherStats:(id)arg4;
+ (id)addMatchRangesForAutocompletion:(id)arg1 queryToken:(id)arg2;
+ (_Bool)isOnlyDigits:(id)arg1;
+ (id)getPhoneValueTokensFromTokens:(id)arg1;
+ (id)getArrayOfPhoneValueTokens:(id)arg1;
+ (id)phoneIgnoredCharacterSet;
+ (id)getValueTokens:(id)arg1 withKnownSubtokens:(id)arg2;
+ (id)getArrayOfEmailTokens:(id)arg1 matcherStats:(id)arg2;
+ (id)getDisplayNameTokens:(id)arg1 matcherStats:(id)arg2;
+ (id)computeMatchRangesForTokens:(id)arg1 queryToken:(id)arg2;
+ (id)matchRangesForEmail:(id)arg1 emailValueTokens:(id)arg2 queryToken:(id)arg3;
+ (id)partialMatchAutocompletions:(id)arg1 query:(id)arg2 clientConfig:(id)arg3 filterOutNotMatching:(_Bool)arg4 matcherStats:(id)arg5;
+ (id)matchAutocompletions:(id)arg1 query:(id)arg2 clientConfig:(id)arg3 filterOutNotMatching:(_Bool)arg4 matcherStats:(id)arg5;

@end

