//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDA4AProtocol, IDVersionInfo, NSArray, NSData, NSDictionary, NSString, NSUUID;

@interface IDAppManifest : NSObject
{
    _Bool _requiresCarDataService;
    _Bool _requiresAudioService;
    _Bool _requiresPiaService;
    _Bool _requiresVoiceRecorderService;
    _Bool _requiresTextToSpeechService;
    _Bool _requiresMapService;
    _Bool _requiresSpeechDialogService;
    NSString *_name;
    NSString *_vendor;
    IDVersionInfo *_version;
    NSArray *_supportedHmiTypes;
    IDA4AProtocol *_protocol;
    NSString *_token;
    NSUUID *_uniqueIdentifier;
    NSData *_signature;
    NSDictionary *_manifest;
}

+ (_Bool)isApplicationManifestSignatureValid:(id)arg1;
+ (_Bool)isApplicationManifestComplete:(id)arg1;
+ (id)requiredKeyPaths;
@property(readonly) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain) NSData *signature; // @synthesize signature=_signature;
@property(retain) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *token; // @synthesize token=_token;
@property(retain) IDA4AProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain) NSArray *supportedHmiTypes; // @synthesize supportedHmiTypes=_supportedHmiTypes;
@property _Bool requiresSpeechDialogService; // @synthesize requiresSpeechDialogService=_requiresSpeechDialogService;
@property _Bool requiresMapService; // @synthesize requiresMapService=_requiresMapService;
@property _Bool requiresTextToSpeechService; // @synthesize requiresTextToSpeechService=_requiresTextToSpeechService;
@property _Bool requiresVoiceRecorderService; // @synthesize requiresVoiceRecorderService=_requiresVoiceRecorderService;
@property _Bool requiresPiaService; // @synthesize requiresPiaService=_requiresPiaService;
@property _Bool requiresAudioService; // @synthesize requiresAudioService=_requiresAudioService;
@property _Bool requiresCarDataService; // @synthesize requiresCarDataService=_requiresCarDataService;
@property(retain) IDVersionInfo *version; // @synthesize version=_version;
@property(copy) NSString *vendor; // @synthesize vendor=_vendor;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithManifest:(id)arg1;

@end

