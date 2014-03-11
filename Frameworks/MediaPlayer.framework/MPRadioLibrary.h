/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPRadioLibrary : NSObject {
}

@property(readonly) BOOL isEnabled;
@property(readonly) unsigned int stationCount;
@property(readonly) NSArray * stations;

+ (id)defaultRadioLibrary;

- (id)_radioModel;
- (void)_radioModelDidChange:(id)arg1;
- (void)addStationBasedOnTrackIDs:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isEnabled;
- (unsigned int)stationCount;
- (id)stationWithIdentifier:(long long)arg1;
- (id)stations;

@end