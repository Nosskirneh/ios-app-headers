//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADJUtil : NSObject
{
}

+ (_Bool)contains:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (_Bool)checkAttributionDetails:(id)arg1;
+ (id)convertDeviceToken:(id)arg1;
+ (void)launchDeepLinkMain:(id)arg1;
+ (_Bool)deleteFile:(id)arg1;
+ (id)getFilename:(id)arg1;
+ (void)launchInQueue:(id)arg1 selfInject:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)mergeParameters:(id)arg1 source:(id)arg2 parameterName:(id)arg3;
+ (_Bool)isValidParameter:(id)arg1 attributeType:(id)arg2 parameterName:(id)arg3;
+ (void)launchInMainThread:(CDUnknownBlockType)arg1;
+ (void)launchInMainThread:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
+ (double)waitingTime:(long long)arg1 backoffStrategy:(id)arg2;
+ (double)randomInRange:(double)arg1 maxRange:(double)arg2;
+ (id)secondsNumberFormat:(double)arg1;
+ (id)removeOptionalRedirect:(id)arg1;
+ (id)convertUniversalLink:(id)arg1 scheme:(id)arg2;
+ (id)idfa;
+ (id)convertDictionaryValues:(id)arg1;
+ (id)completionHandler:(id)arg1 response:(id)arg2 error:(id)arg3 prefixErrorMessage:(id)arg4 suffixErrorMessage:(id)arg5 activityPackage:(id)arg6;
+ (void)sendNSURLConnectionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(CDUnknownBlockType)arg5;
+ (void)sendNSURLSessionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(CDUnknownBlockType)arg5;
+ (void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(CDUnknownBlockType)arg5;
+ (void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 activityPackage:(id)arg3 responseDataHandler:(CDUnknownBlockType)arg4;
+ (id)requestForPackage:(id)arg1 baseUrl:(id)arg2 queueSize:(unsigned long long)arg3;
+ (void)sendPostRequest:(id)arg1 queueSize:(unsigned long long)arg2 prefixErrorMessage:(id)arg3 suffixErrorMessage:(id)arg4 activityPackage:(id)arg5 responseDataHandler:(CDUnknownBlockType)arg6;
+ (id)formatErrorMessage:(id)arg1 systemErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3;
+ (_Bool)isNotNull:(id)arg1;
+ (_Bool)isNull:(id)arg1;
+ (id)queryString:(id)arg1 queueSize:(unsigned long long)arg2;
+ (id)queryString:(id)arg1;
+ (void)writeObject:(id)arg1 filename:(id)arg2 objectName:(id)arg3;
+ (id)readObject:(id)arg1 objectName:(id)arg2 class:(Class)arg3;
+ (id)getFullFilename:(id)arg1;
+ (id)buildJsonDict:(id)arg1 exceptionPtr:(id *)arg2 errorPtr:(id *)arg3;
+ (void)saveJsonResponse:(id)arg1 responseData:(id)arg2;
+ (id)formatDate:(id)arg1;
+ (id)formatSeconds1970:(double)arg1;
+ (void)excludeFromBackup:(id)arg1;
+ (id)clientSdk;
+ (id)baseUrl;
+ (void)updateUrlSessionConfiguration:(id)arg1;
+ (void)initializeUrlSessionConfiguration;
+ (void)initializeSecondsNumberFormatter;
+ (void)initializeOptionalRedirectRegex;
+ (void)initializeShortUniversalLinkRegex;
+ (void)initializeUniversalLinkRegex;
+ (void)initializeDateFormat;
+ (void)initialize;

@end
