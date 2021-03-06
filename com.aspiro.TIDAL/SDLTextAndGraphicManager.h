//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SDLArtwork, SDLDisplayCapabilities, SDLFileManager, SDLShow;
@protocol SDLConnectionManagerType;

@interface SDLTextAndGraphicManager : NSObject
{
    _Bool _batchUpdates;
    _Bool _hasQueuedUpdate;
    _Bool _waitingOnHMILevelUpdateToUpdate;
    _Bool _isDirty;
    NSString *_textField1;
    NSString *_textField2;
    NSString *_textField3;
    NSString *_textField4;
    NSString *_mediaTrackTextField;
    SDLArtwork *_primaryGraphic;
    SDLArtwork *_secondaryGraphic;
    NSString *_alignment;
    NSString *_textField1Type;
    NSString *_textField2Type;
    NSString *_textField3Type;
    NSString *_textField4Type;
    id <SDLConnectionManagerType> _connectionManager;
    SDLFileManager *_fileManager;
    SDLShow *_currentScreenData;
    SDLShow *_inProgressUpdate;
    CDUnknownBlockType _inProgressHandler;
    SDLShow *_queuedImageUpdate;
    CDUnknownBlockType _queuedUpdateHandler;
    SDLDisplayCapabilities *_displayCapabilities;
    NSString *_currentLevel;
    SDLArtwork *_blankArtwork;
}

@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) _Bool waitingOnHMILevelUpdateToUpdate; // @synthesize waitingOnHMILevelUpdateToUpdate=_waitingOnHMILevelUpdateToUpdate;
@property(retain, nonatomic) SDLArtwork *blankArtwork; // @synthesize blankArtwork=_blankArtwork;
@property(retain, nonatomic) NSString *currentLevel; // @synthesize currentLevel=_currentLevel;
@property(retain, nonatomic) SDLDisplayCapabilities *displayCapabilities; // @synthesize displayCapabilities=_displayCapabilities;
@property(copy, nonatomic) CDUnknownBlockType queuedUpdateHandler; // @synthesize queuedUpdateHandler=_queuedUpdateHandler;
@property(nonatomic) _Bool hasQueuedUpdate; // @synthesize hasQueuedUpdate=_hasQueuedUpdate;
@property(retain, nonatomic) SDLShow *queuedImageUpdate; // @synthesize queuedImageUpdate=_queuedImageUpdate;
@property(copy, nonatomic) CDUnknownBlockType inProgressHandler; // @synthesize inProgressHandler=_inProgressHandler;
@property(retain, nonatomic) SDLShow *inProgressUpdate; // @synthesize inProgressUpdate=_inProgressUpdate;
@property(retain, nonatomic) SDLShow *currentScreenData; // @synthesize currentScreenData=_currentScreenData;
@property(nonatomic) __weak SDLFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) __weak id <SDLConnectionManagerType> connectionManager; // @synthesize connectionManager=_connectionManager;
@property(nonatomic, getter=isBatchingUpdates) _Bool batchUpdates; // @synthesize batchUpdates=_batchUpdates;
@property(copy, nonatomic) NSString *textField4Type; // @synthesize textField4Type=_textField4Type;
@property(copy, nonatomic) NSString *textField3Type; // @synthesize textField3Type=_textField3Type;
@property(copy, nonatomic) NSString *textField2Type; // @synthesize textField2Type=_textField2Type;
@property(copy, nonatomic) NSString *textField1Type; // @synthesize textField1Type=_textField1Type;
@property(copy, nonatomic) NSString *alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) SDLArtwork *secondaryGraphic; // @synthesize secondaryGraphic=_secondaryGraphic;
@property(retain, nonatomic) SDLArtwork *primaryGraphic; // @synthesize primaryGraphic=_primaryGraphic;
@property(copy, nonatomic) NSString *mediaTrackTextField; // @synthesize mediaTrackTextField=_mediaTrackTextField;
@property(copy, nonatomic) NSString *textField4; // @synthesize textField4=_textField4;
@property(copy, nonatomic) NSString *textField3; // @synthesize textField3=_textField3;
@property(copy, nonatomic) NSString *textField2; // @synthesize textField2=_textField2;
@property(copy, nonatomic) NSString *textField1; // @synthesize textField1=_textField1;
- (void).cxx_destruct;
- (void)sdl_hmiStatusNotification:(id)arg1;
- (void)sdl_displayLayoutResponse:(id)arg1;
- (void)sdl_registerResponse:(id)arg1;
- (_Bool)sdl_showImages:(id)arg1 isEqualToShowImages:(id)arg2;
- (_Bool)sdl_hasData;
- (id)sdl_findNonNilMetadataFields;
- (id)sdl_findNonNilTextFields;
- (_Bool)sdl_shouldUpdateSecondaryImage;
- (_Bool)sdl_shouldUpdatePrimaryImage;
- (_Bool)sdl_uploadedArtworkOrDoesntExist:(id)arg1;
- (void)sdl_updateCurrentScreenDataFromShow:(id)arg1;
- (id)sdl_extractImageFromShow:(id)arg1;
- (id)sdl_extractTextFromShow:(id)arg1;
- (id)sdl_setBlankTextFieldsWithShow:(id)arg1;
- (id)sdl_assembleFourLineShowText:(id)arg1;
- (id)sdl_assembleThreeLineShowText:(id)arg1;
- (id)sdl_assembleTwoLineShowText:(id)arg1;
- (id)sdl_assembleOneLineShowText:(id)arg1 withShowFields:(id)arg2;
- (id)sdl_assembleShowText:(id)arg1;
- (id)sdl_assembleShowImages:(id)arg1;
- (void)sdl_uploadImagesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sdl_updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stop;
- (id)initWithConnectionManager:(id)arg1 fileManager:(id)arg2;

@end

