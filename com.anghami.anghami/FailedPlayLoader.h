//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSDictionary, NSString;

@interface FailedPlayLoader : Loader
{
    _Bool _isLogoff;
    NSString *_songId;
    NSString *_userId;
    NSString *_reason;
    NSDictionary *_extraData;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_versionString;
    NSString *_errorCode;
    NSString *_errorMessage;
    long long _httpCodeToReport;
    NSDictionary *_httpHeadersToReport;
    NSString *_debugURLData;
    NSString *_debugURLResponseData;
}

@property(retain, nonatomic) NSString *debugURLResponseData; // @synthesize debugURLResponseData=_debugURLResponseData;
@property(retain, nonatomic) NSString *debugURLData; // @synthesize debugURLData=_debugURLData;
@property(retain, nonatomic) NSDictionary *httpHeadersToReport; // @synthesize httpHeadersToReport=_httpHeadersToReport;
@property long long httpCodeToReport; // @synthesize httpCodeToReport=_httpCodeToReport;
@property(retain) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(retain) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property _Bool isLogoff; // @synthesize isLogoff=_isLogoff;
@property(copy) NSString *versionString; // @synthesize versionString=_versionString;
@property unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (id)generateRequest;
- (void)startLoad;
- (id)initWithSongId:(id)arg1 forUser:(id)arg2 withReason:(id)arg3 httpCode:(long long)arg4 httpHeaders:(id)arg5 debugURLData:(id)arg6 callbackBlock:(CDUnknownBlockType)arg7;
- (int)type;

@end
