//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPlayURL : NSObject
{
}

+ (void)maybePostNotificationFromError:(id)arg1 requestURL:(id)arg2 isStreamingRequest:(_Bool)arg3;
+ (id)maybeCreateErrorFromResponse:(id)arg1 requestURL:(id)arg2 isStreamingRequest:(_Bool)arg3;
+ (_Bool)hasID3FooterAttachedHeader:(struct NSDictionary *)arg1;
+ (id)contentTypeFromResponseHeaders:(struct NSDictionary *)arg1;
+ (_Bool)contentLengthFromResponseHeaders:(struct NSDictionary *)arg1 contentLength:(unsigned long long *)arg2;
+ (long long)trackCacheCodecFromResponseHeaders:(struct NSDictionary *)arg1 error:(id *)arg2;
+ (long long)trackCacheCodecFromContentType:(id)arg1 error:(id *)arg2;
+ (id)contentTypeFromResponseHeaders:(struct NSDictionary *)arg1 error:(id *)arg2;
+ (_Bool)trackCacheQualityFromResponseHeaders:(struct NSDictionary *)arg1 quality:(long long *)arg2;
+ (struct NSDictionary *)deviceHeaders;
+ (id)acceptValueForTrack;
+ (void)addAcceptHeaderForTrackRequest:(id)arg1;
+ (void)addDeviceHeaders:(id)arg1;
+ (id)authQueryItemsForTrack:(id)arg1;
+ (id)queryItemsForTrack:(id)arg1 streaming:(_Bool)arg2 explicitPlay:(_Bool)arg3 startTime:(double)arg4 targetKBPS:(unsigned long long)arg5 streamingQuality:(long long)arg6 adaptiveStreamingEnabled:(_Bool)arg7 networkType:(long long)arg8;
+ (_Bool)URLIsWPlayURL:(id)arg1;
+ (id)streamingFrontEndURL;
+ (id)basePlayURLPathWithWPlay:(_Bool)arg1;
+ (id)deviceVersionQueryItem;
+ (id)URLForWPlayURL:(id)arg1 sessionToken:(id)arg2;
+ (id)URLForTrack:(id)arg1 streaming:(_Bool)arg2 explicitPlay:(_Bool)arg3;
+ (id)URLForTrack:(id)arg1 streaming:(_Bool)arg2 explicitPlay:(_Bool)arg3 startTime:(double)arg4 targetKBPS:(unsigned long long)arg5 streamingQuality:(long long)arg6 adaptiveStreamingEnabled:(_Bool)arg7 networkType:(long long)arg8;

@end
