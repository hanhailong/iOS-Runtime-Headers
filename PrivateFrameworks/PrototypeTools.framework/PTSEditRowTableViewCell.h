/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString;

@interface PTSEditRowTableViewCell : PTSRowTableViewCell <UITextFieldDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (int)cellStyleForRow:(id)arg1;

- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textForValue:(id)arg1;
- (void)updateDisplayedValue;
- (id)valueForText:(id)arg1;

@end
