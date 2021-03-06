//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class ANGGenericObject, NSString;

@interface GenericContentSectionLoader : ContentSectionLoader
{
    NSString *_playerOfflineRecText;
    NSString *_offlineRecText;
    NSString *_offlineRecButton;
    ANGGenericObject *_genericObject;
}

@property(retain, nonatomic) ANGGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) NSString *offlineRecButton; // @synthesize offlineRecButton=_offlineRecButton;
@property(retain, nonatomic) NSString *offlineRecText; // @synthesize offlineRecText=_offlineRecText;
@property(retain, nonatomic) NSString *playerOfflineRecText; // @synthesize playerOfflineRecText=_playerOfflineRecText;
- (void).cxx_destruct;
- (_Bool)didHandleParsingData:(id)arg1;
- (id)generateRequest;
- (id)requestParams;
- (id)actionString;
- (int)type;

@end

