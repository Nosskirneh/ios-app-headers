//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol HUBJSONDictionaryPath, HUBJSONStringPath, HUBViewModelJSONSchema;

@protocol HUBViewModelJSONSchema
@property(retain, nonatomic) id <HUBJSONDictionaryPath> customDataPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> overlayComponentModelDictionariesPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> bodyComponentModelDictionariesPath;
@property(retain, nonatomic) id <HUBJSONDictionaryPath> headerComponentModelDictionaryPath;
@property(retain, nonatomic) id <HUBJSONStringPath> navigationBarTitlePath;
@property(retain, nonatomic) id <HUBJSONStringPath> identifierPath;
- (id <HUBViewModelJSONSchema>)copy;
@end

