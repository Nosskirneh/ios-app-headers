//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ANGGoogleCastController, ANGGoogleCastPlayer;

@protocol ANGGoogleCastControllerDelegate
- (void)googleCastControllerDidDisconnectFromDevice:(ANGGoogleCastController *)arg1;
- (void)googleCastController:(ANGGoogleCastController *)arg1 didConnectToApplicationWithPlayer:(ANGGoogleCastPlayer *)arg2;
- (void)googleCastControllerDidConnectToDevice:(ANGGoogleCastController *)arg1;
@end
