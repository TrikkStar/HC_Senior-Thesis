namespace Project_Oppenheimer.Properties
{
    public struct Card
    {
        public string name;
        public int id;
        public int opsValue;
        public int affiliation;
        public bool scoring;
        public bool oneTimeEvent;

        public Card(string _name, int _id, int ops, int _affiliation, bool _scoring, bool OTE)
        {
            name = _name;
            id = _id;
            opsValue = ops;
            affiliation = _affiliation;
            scoring = _scoring;
            oneTimeEvent = OTE;
        }
    }
}
